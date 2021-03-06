//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGRegistrationBulletedViewDelegate-Protocol.h"

@class IGRegistrationRichTextViewModel, NSMutableArray, NSMutableDictionary, NSString, UIScrollView;
@protocol IGRegistrationRichTextViewDelegate;

@interface IGRegistrationRichTextView : UIView <IGCoreTextLinkHandler, IGRegistrationBulletedViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_textViews;
    NSMutableDictionary *_bulletedPointTextViewsDictionary;
    IGRegistrationRichTextViewModel *_viewModel;
    id <IGRegistrationRichTextViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationRichTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)bulletedView:(id)arg1 didTapURL:(id)arg2;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

