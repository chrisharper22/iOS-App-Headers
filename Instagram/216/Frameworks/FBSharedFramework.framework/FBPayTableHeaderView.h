//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class FBPayTableHeaderViewConfiguration, UIButton, UILabel;
@protocol FBPayTableHeaderViewDelegate;

@interface FBPayTableHeaderView : UITableViewHeaderFooterView
{
    UILabel *_headerLabel;
    UIButton *_ctaButton;
    FBPayTableHeaderViewConfiguration *_configuration;
    struct UIEdgeInsets _edgeInsets;
    long long _tag;
    id <FBPayTableHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (id)_constraintsForCTAButtonView;
- (id)_constraintsForLabelView;
- (void)_setupConstraints;
- (void)_didTapCTA;
- (void)setConfiguration:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

