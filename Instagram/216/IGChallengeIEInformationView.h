//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, NSString, UIImageView, UILabel, UIScrollView;
@protocol IGChallengeIEInformationViewDelegate;

@interface IGChallengeIEInformationView : UIView <IGCoreTextLinkHandler>
{
    UIScrollView *_containerScrollView;
    UIImageView *_imageView;
    UILabel *_contentTitle;
    IGCoreTextView *_contentMessage;
    IGBottomButtonsView *_bottomButtonsView;
    id <IGChallengeIEInformationViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGChallengeIEInformationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_contentHeight;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

