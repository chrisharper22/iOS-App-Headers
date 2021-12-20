//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGSuggestionsUnitDefaultCardCell.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGProfilePictureImageView, IGSuggestionsUnitUserMediaView, NSString, UIButton, UILabel, UIView;
@protocol IGSuggestionsUnitUserCardCellDelegate;

@interface IGSuggestionsUnitUserCardCell : IGSuggestionsUnitDefaultCardCell <UIGestureRecognizerDelegate>
{
    IGProfilePictureImageView *_profilePictureImageView;
    UIButton *_dismissButton;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_socialContextLabel;
    IGSuggestionsUnitUserMediaView *_mediaView;
    UIView *_followView;
    UIView *_verifiedBadgeView;
    id <IGSuggestionsUnitUserCardCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSuggestionsUnitUserCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dismissButtonTapped;
- (void)_didTapUserCardCell;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)configureWithUserInfo:(id)arg1 followView:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
