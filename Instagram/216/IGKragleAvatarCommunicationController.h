//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGKragleAvatarCommunicationController : NSObject
{
    struct __RSAvatarCommunicationApi *_avatarCommunicationApi;
}

- (const struct __RSFeature *)createFeatureWithDispatchHandler:(CDUnknownFunctionPointerType)arg1 dispatchContext:(void *)arg2 dataApi:(struct __RSDataApi *)arg3;
- (void)avatarCommunicationSendUsingAvatars:(_Bool)arg1;
- (void)dealloc;

@end

