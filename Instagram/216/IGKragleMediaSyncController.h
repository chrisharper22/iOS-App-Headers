//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGKragleMediaSyncController : NSObject
{
    struct __RSMediaSyncApi *_mediaSyncApi;
}

- (const struct __RSFeature *)createFeatureWithDispatchHandler:(CDUnknownFunctionPointerType)arg1 dispatchContext:(void *)arg2 dataApi:(struct __RSDataApi *)arg3 syncedClock:(id)arg4 mediaSyncOption:(int)arg5;
- (void)handleLocalUpdate:(int)arg1;
- (void)handleUpdate:(id)arg1;
- (void)refresh;
- (void)updateContent:(id)arg1 forMediaId:(id)arg2;
- (void)dealloc;

@end
