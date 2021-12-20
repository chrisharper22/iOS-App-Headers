//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class IGTextView, NSString;
@protocol IGGenericSurveyTextViewDelegate;

@interface IGGenericSurveyTextView : UIView <UITextViewDelegate>
{
    IGTextView *_textView;
    id <IGGenericSurveyTextViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGenericSurveyTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPlaceholderText:(id)arg1;
- (void)_doneButtonTapped;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
