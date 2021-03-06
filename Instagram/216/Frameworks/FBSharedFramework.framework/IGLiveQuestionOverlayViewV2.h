//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGLiveQuestionOverlayViewModel, IGProfilePictureImageView, IGTapButton, IGUser, UILabel;
@protocol IGLiveQuestionOverlayViewDelegateV2;

@interface IGLiveQuestionOverlayViewV2 : UIView
{
    UILabel *_headerLabel;
    UILabel *_questionLabel;
    IGProfilePictureImageView *_profilePictureImageView;
    IGTapButton *_removeButton;
    IGUser *_submittedByUser;
    IGLiveQuestionOverlayViewModel *_model;
    id <IGLiveQuestionOverlayViewDelegateV2> _delegate;
}

+ (double)questionHeightWithText:(id)arg1 userName:(id)arg2 thatFits:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveQuestionOverlayViewDelegateV2> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_removeButtonTapped;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

