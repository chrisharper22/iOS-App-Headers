//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGIGLContext, NSLock;

@interface IGFBFilteredImageGenerator : NSObject
{
    NSLock *_appBackgroundLock;
    IGIGLContext *_iglContext;
}

- (void).cxx_destruct;
- (void)filteredImagesForImage:(id)arg1 filterIdentifiers:(id)arg2 blurFilterTiles:(_Bool)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_applicationDidWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
