//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFollowControllerDelegate-Protocol.h"
#import "IGHScrollSuggestionCell-Protocol.h"
#import "IGMediaThumbnailViewDelegate-Protocol.h"

@class IGFollowController, IGMediaThumbnailView, IGProfilePictureImageView, IGSuggestedUserInfo, IGTapButton, IGUsernameLabel, NSArray, NSString, UILabel;
@protocol IGHScrollSuggestionCellDelegate;

@interface IGHScroll2PreviewsCell : UICollectionViewCell <IGFollowControllerDelegate, IGMediaThumbnailViewDelegate, IGHScrollSuggestionCell>
{
    IGTapButton *_dismissButton;
    IGMediaThumbnailView *_leftPreview;
    IGMediaThumbnailView *_rightPreview;
    IGProfilePictureImageView *_profilePicImageView;
    IGUsernameLabel *_nameLabel;
    UILabel *_subtitleLabel;
    IGFollowController *_followController;
    IGSuggestedUserInfo *_userInfo;
    NSArray *_accessibilityCustomActions;
    id <IGHScrollSuggestionCellDelegate> _delegate;
}

+ (double)preferredHeightForCellWithSuggestion:(id)arg1 width:(double)arg2;
+ (double)preferredWidthForContainerWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGHScrollSuggestionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_didTapAYMFActionButton:(id)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (void)mediaThumbnailView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)mediaThumbnailView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (id)_feedItemForMediaThumbnailView:(id)arg1;
- (void)_dismissButtonTapped;
- (void)configureWithSuggestion:(id)arg1 userSession:(id)arg2 cellConfiguration:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
