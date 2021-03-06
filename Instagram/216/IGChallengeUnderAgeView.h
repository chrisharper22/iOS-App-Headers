//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, NSString, UIButton, UIImageView, UILabel, UIScrollView;
@protocol IGChallengeUnderAgeViewDelegate;

@interface IGChallengeUnderAgeView : UIView <IGCoreTextLinkHandler>
{
    UIScrollView *_contentView;
    UIImageView *_imageView;
    UILabel *_contentTitle;
    IGCoreTextView *_contentText;
    UILabel *_separatorLineLabel;
    UIButton *_downloadDataButton;
    UIButton *_logOutButton;
    id <IGChallengeUnderAgeViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGChallengeUnderAgeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapOnLogOutButton;
- (void)_didTapOnDownloadDataButton;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (double)_contentHeight;
- (void)configureViewWithTitleText:(id)arg1 contentText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

