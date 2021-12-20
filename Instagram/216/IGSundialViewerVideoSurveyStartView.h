//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGSundialViewerVideoSurveyActionButtonsViewDelegate-Protocol.h"

@class IGSimpleAction, IGStackLayout, IGSundialSurveyPreviewImageView, IGSundialViewerVideoSurveyActionButtonsView, IGSundialViewerVideoSurveyBackgroundView, NSString, UILabel;
@protocol IGSundialViewerVideoSurveyStartViewDelegate;

@interface IGSundialViewerVideoSurveyStartView : UIView <IGSundialViewerVideoSurveyActionButtonsViewDelegate>
{
    IGSimpleAction *_simpleAction;
    IGSundialSurveyPreviewImageView *_imageView;
    UILabel *_titleView;
    UILabel *_messageView;
    IGStackLayout *_stackLayout;
    IGSundialViewerVideoSurveyBackgroundView *_backgroundView;
    IGSundialViewerVideoSurveyActionButtonsView *_buttonsViewFixedWidth;
    _Bool _showTabBar;
    id <IGSundialViewerVideoSurveyStartViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showTabBar; // @synthesize showTabBar=_showTabBar;
@property(nonatomic) __weak id <IGSundialViewerVideoSurveyStartViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)surveyViewDidTapSkipButton:(id)arg1;
- (void)surveyViewDidTapStartButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithSundialSimpleAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

