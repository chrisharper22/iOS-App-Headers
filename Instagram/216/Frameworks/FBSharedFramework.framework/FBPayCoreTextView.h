//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBPayStyledText;
@protocol FBPayCoreTextViewDelegate;

@interface FBPayCoreTextView : UIView
{
    FBPayStyledText *_styledText;
    id <FBPayCoreTextViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayCoreTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) FBPayStyledText *styledText; // @synthesize styledText=_styledText;
- (struct CGSize)sizeWithMaxWidth:(double)arg1;

@end

