//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGTokenView, NSString;

@protocol IGTokenViewDelegate <NSObject>
- (void)tokenViewWantsDelete:(IGTokenView *)arg1 replacementString:(NSString *)arg2;
- (void)tokenViewDidResignFirstResponder:(IGTokenView *)arg1;
- (void)tokenViewDidBecomeFirstResponder:(IGTokenView *)arg1;
@end

