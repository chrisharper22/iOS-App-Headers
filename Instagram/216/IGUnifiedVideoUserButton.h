//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

#import "IGUnifiedVideoUserControlType-Protocol.h"

@class IGProfilePhotoView, IGUser, NSString, UIImageView, UILabel;
@protocol IGUnifiedVideoUserControlDelegate;

@interface IGUnifiedVideoUserButton : IGBouncyButton <IGUnifiedVideoUserControlType>
{
    UILabel *_userNameLabel;
    UIImageView *_verifiedBadgeImageView;
    UILabel *_sponsoredLabel;
    IGProfilePhotoView *_profilePhotoView;
    IGUser *_user;
    long long _verticalTextAlignment;
    id <IGUnifiedVideoUserControlDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGUnifiedVideoUserControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long verticalTextAlignment; // @synthesize verticalTextAlignment=_verticalTextAlignment;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void)_didRecieveTap;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) struct CGRect usernameFrame;
@property(readonly, nonatomic) struct CGRect profileImageFrame;
- (void)configureWithUser:(id)arg1 storyRingSpec:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setShowSponsoredLabel:(_Bool)arg1 sponsoredText:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

