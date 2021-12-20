//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPlainTableViewCell.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, IGUnseenIndicatorView, NSString, UILongPressGestureRecognizer, UIView;
@protocol IGFollowButtonAnalyticsDelegate, IGSearchResultCellDelegate;

@interface IGSearchResultCell : IGPlainTableViewCell <UIGestureRecognizerDelegate>
{
    UIView *_iconView;
    id <IGFollowButtonAnalyticsDelegate> _analyticsDelegate;
    id <IGSearchResultCellDelegate> _delegate;
    NSString *_itemId;
    CALayer *_separatorLayer;
    UILongPressGestureRecognizer *_contentMenuLongPressRecognizer;
    IGUnseenIndicatorView *_unseenToastView;
}

+ (id)backgroundColor;
- (void).cxx_destruct;
@property(retain, nonatomic) IGUnseenIndicatorView *unseenToastView; // @synthesize unseenToastView=_unseenToastView;
@property(retain, nonatomic) UILongPressGestureRecognizer *contentMenuLongPressRecognizer; // @synthesize contentMenuLongPressRecognizer=_contentMenuLongPressRecognizer;
@property(readonly, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) __weak id <IGSearchResultCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGFollowButtonAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
- (void)_onContentMenuPress:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_setUpSeparator;
- (void)setIcon:(id)arg1;
- (struct CGRect)_unSeenToastViewContainedInBounds:(struct CGRect)arg1 withSize:(struct CGSize)arg2;
- (struct CGRect)_iconFrameContainedInBounds:(struct CGRect)arg1;
- (struct CGRect)_labelFrameContainedInBounds:(struct CGRect)arg1 labelFrame:(struct CGRect)arg2;
- (void)_layoutLabels:(double)arg1 bounds:(struct CGRect)arg2;
- (double)labelMinXForIconFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setPlace:(id)arg1;
- (void)setHashtag:(id)arg1;
- (void)setSearchQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
