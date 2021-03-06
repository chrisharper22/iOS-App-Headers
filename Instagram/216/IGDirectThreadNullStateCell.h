//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGDirectNullStateViewDelegate-Protocol.h"

@class IGDirectThreadNullStateView, IGDirectThreadNullStateViewModel, NSString;
@protocol IGDirectNullStateCellDelegate;

@interface IGDirectThreadNullStateCell : UICollectionViewCell <IGDirectNullStateViewDelegate>
{
    IGDirectThreadNullStateViewModel *_viewModel;
    IGDirectThreadNullStateView *_nullStateView;
    id <IGDirectNullStateCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectNullStateCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)nullStateStringWasPressed:(id)arg1 URL:(id)arg2;
- (void)nullStateButtonWasPressed:(id)arg1 threadType:(id)arg2;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 userFeatureSets:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

