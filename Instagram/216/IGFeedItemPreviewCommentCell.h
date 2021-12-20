//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGFeedItemTextCell.h"

@class UIButton, UIView;
@protocol IGFeedItemPreviewCommentCellDelegate;

@interface IGFeedItemPreviewCommentCell : IGFeedItemTextCell
{
    UIView *_threadView;
    _Bool _threadViewVisible;
    id <IGFeedItemPreviewCommentCellDelegate> _likeDelegate;
    UIButton *_likeButton;
    double _topPadding;
}

+ (double)textWidthContainedInWidth:(double)arg1 showThreadView:(_Bool)arg2;
+ (double)textWidthContainedInWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(readonly, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) _Bool threadViewVisible; // @synthesize threadViewVisible=_threadViewVisible;
@property(nonatomic) __weak id <IGFeedItemPreviewCommentCellDelegate> likeDelegate; // @synthesize likeDelegate=_likeDelegate;
- (id)accessibleElements;
- (void)_didTapLikeButton;
- (void)layoutTextView;
- (void)_setLikeButtonSelected:(_Bool)arg1;
- (void)configureWithStyledString:(id)arg1 media:(id)arg2 feedItemRow:(id)arg3 feedTheme:(id)arg4 cellDelegate:(id)arg5 touchHandlerDelegate:(id)arg6 topPadding:(double)arg7 userSession:(id)arg8;
- (id)initWithFrame:(struct CGRect)arg1;

@end

