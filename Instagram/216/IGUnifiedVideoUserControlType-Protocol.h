//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGRingViewSpec, IGUser, NSString;
@protocol IGUnifiedVideoUserControlDelegate;

@protocol IGUnifiedVideoUserControlType <NSObject>
@property(nonatomic) __weak id <IGUnifiedVideoUserControlDelegate> delegate;
@property(readonly, nonatomic) struct CGRect usernameFrame;
@property(readonly, nonatomic) struct CGRect profileImageFrame;
@property(nonatomic) long long verticalTextAlignment;
@property(readonly, nonatomic) IGUser *user;
- (void)setShowSponsoredLabel:(_Bool)arg1 sponsoredText:(NSString *)arg2;
- (void)configureWithUser:(IGUser *)arg1 storyRingSpec:(IGRingViewSpec *)arg2;
@end

