//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGMuteUserHelper : NSObject
{
}

+ (void)showAndHandleMuteDialog:(id)arg1 media:(id)arg2 userSession:(id)arg3 module:(id)arg4 source:(long long)arg5 type:(long long)arg6 showNonDestructiveStyle:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)showAndHandleMuteUnmuteDialog:(id)arg1 userSession:(id)arg2 module:(id)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)muteUser:(id)arg1 story:(_Bool)arg2 posts:(_Bool)arg3 media:(id)arg4 userSession:(id)arg5 module:(id)arg6 source:(long long)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)unmuteUser:(id)arg1 story:(_Bool)arg2 posts:(_Bool)arg3 userSession:(id)arg4 module:(id)arg5 source:(long long)arg6 completion:(CDUnknownBlockType)arg7;

@end

