//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGDirectSecureNotification, NSString;

@protocol IGDirectSecureNotificationPresenting <NSObject>
- (void)cancelSecureNotification:(NSString *)arg1;
- (void)presentSecureNotification:(IGDirectSecureNotification *)arg1 runningInNSE:(_Bool)arg2;
@end

