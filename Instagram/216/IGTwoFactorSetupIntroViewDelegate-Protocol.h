//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTwoFactorSetupIntroView, NSURL;

@protocol IGTwoFactorSetupIntroViewDelegate <NSObject>
- (void)twoFactorSetupIntroView:(IGTwoFactorSetupIntroView *)arg1 didTapOnLinkWithURL:(NSURL *)arg2;
- (void)twoFactorSetupIntroViewDidTapOnStartButton:(IGTwoFactorSetupIntroView *)arg1;
@end
