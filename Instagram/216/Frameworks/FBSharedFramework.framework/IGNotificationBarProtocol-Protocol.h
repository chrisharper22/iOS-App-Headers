//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGNotificationBarImage, NSAttributedString;
@protocol IGNotificationBarListener, IGNotificationHandler;

@protocol IGNotificationBarProtocol <NSObject>
- (void)layoutWithNeedsImmediateLayout:(_Bool)arg1;
- (_Bool)isNotificationBarVisible;
- (void)hideNotification;
- (void)removeListener:(id <IGNotificationBarListener>)arg1;
- (void)addListener:(id <IGNotificationBarListener>)arg1;
- (void)showWithImage:(IGNotificationBarImage *)arg1 attributedTitle:(NSAttributedString *)arg2 attributedSubtitle:(NSAttributedString *)arg3 attributedBody:(NSAttributedString *)arg4 actionSource:(unsigned long long)arg5 options:(CDStruct_d29f4384)arg6 block:(void (^)(unsigned long long))arg7 notificationHandler:(id <IGNotificationHandler>)arg8;
@end

