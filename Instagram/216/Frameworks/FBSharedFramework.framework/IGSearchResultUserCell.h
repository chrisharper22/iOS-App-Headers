//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGSearchResultCell.h>

#import <FBSharedFramework/IGProfilePictureImageViewDelegate-Protocol.h>

@class IGProfilePictureImageView, IGStoryGradientRingView, NSString, UIImageView;

@interface IGSearchResultUserCell : IGSearchResultCell <IGProfilePictureImageViewDelegate>
{
    UIImageView *_verifiedUserBadgeView;
    IGStoryGradientRingView *_gradientRing;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryGradientRingView *gradientRing; // @synthesize gradientRing=_gradientRing;
@property(retain, nonatomic) UIImageView *verifiedUserBadgeView; // @synthesize verifiedUserBadgeView=_verifiedUserBadgeView;
- (void)profilePictureImageViewImageFailedToLoad:(id)arg1 withURL:(id)arg2;
- (void)profilePictureImageViewImageDidLoad:(id)arg1 profileImage:(id)arg2;
- (void)profilePictureTapped:(id)arg1;
- (void)layoutSubviews;
- (void)_setUpDetailTextLabelForUser:(id)arg1;
- (void)configureWithUser:(id)arg1 showsStoryRing:(_Bool)arg2 module:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) IGProfilePictureImageView *iconView; // @dynamic iconView;
@property(readonly) Class superclass;

@end

