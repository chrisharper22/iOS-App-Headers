//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCollectionViewCell.h>

@class UIImageView, UILabel, UIView;
@protocol IGFeedFilterEditCellDelegate;

@interface IGFeedFilterEditCell : IGCollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_topLine;
    UIView *_gripView;
    UIImageView *_gripImageView;
    _Bool _isDragging;
    id <IGFeedFilterEditCellDelegate> _delegate;
}

+ (double)heightWithTitle:(id)arg1 subtitle:(id)arg2 width:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedFilterEditCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleLongPress:(id)arg1;
- (void)_updateState;
- (void)prepareForReuse;
- (void)_setIsDragging:(_Bool)arg1;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 showGrip:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

