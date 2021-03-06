//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGHeadlineViewDelegate-Protocol.h>

@class IGDirectSearchErrorStatesViewModel, IGHeadlineView, NSString;
@protocol IGDirectSearchErrorStatesViewCellDelegate;

@interface IGDirectSearchErrorStatesViewCell : UICollectionViewCell <IGHeadlineViewDelegate>
{
    IGHeadlineView *_headlineView;
    long long _errorType;
    IGDirectSearchErrorStatesViewModel *_viewModel;
    id <IGDirectSearchErrorStatesViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectSearchErrorStatesViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)headlineProfileImageWasTapped;
- (void)headlineTextButtonWasTapped;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

