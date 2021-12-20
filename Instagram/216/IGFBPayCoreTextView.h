//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayCoreTextView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class FBPayStyledText, IGCoreTextView, NSString;
@protocol FBPayCoreTextViewDelegate;

@interface IGFBPayCoreTextView : FBPayCoreTextView <IGCoreTextLinkHandler>
{
    IGCoreTextView *_textView;
    FBPayStyledText *_styledText;
    id <FBPayCoreTextViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)styledText;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)sizeWithMaxWidth:(double)arg1;
- (void)setStyledText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 styledString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

