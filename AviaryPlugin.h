// AviaryGap - v.1.0.0
// (c) 2013 Ryan Vanderpol, me@ryanvanderpol.com, MIT Licensed.
// AviaryPlugin.h may be freely distributed under the MIT license.
//
//  AviaryPlugin.h
//

#import <Cordova/CDVPlugin.h>
#import "AFPhotoEditorController.h"

@interface AviaryPlugin : CDVPlugin <AFPhotoEditorControllerDelegate> {
    AFPhotoEditorController* aviary;
}

@property (nonatomic, retain) AFPhotoEditorController *aviary;
@property (nonatomic, retain) NSString* pluginCallbackId;

- (void) editImage:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
