//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGKragleDropInController : NSObject
{
    struct __RSDropInApi *_dropInApi;
}

- (const struct __RSFeature *)createFeatureWithDataApi:(struct __RSDataApi *)arg1 dispatchHandler:(CDUnknownFunctionPointerType)arg2 dispatchContext:(void *)arg3;
- (void)joinWithAudioOnly:(_Bool)arg1;
- (void)acceptAfterCountdown:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startDropInWithCountdown:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

