//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGStoryMultiCaptureModel, IGStoryMultiCaptureSelectIconView, UIImageView, UIImpactFeedbackGenerator, UILabel;
@protocol IGStoryMultiCaptureCaptureCollectionViewCellDelegate;

@interface IGStoryMultiCaptureCaptureCollectionViewCell : UICollectionViewCell
{
    UIImageView *_previewImageView;
    IGStoryMultiCaptureSelectIconView *_selectionIconView;
    UILabel *_videoDurationLabel;
    UIImpactFeedbackGenerator *_impactGenerator;
    id <IGStoryMultiCaptureCaptureCollectionViewCellDelegate> _delegate;
    IGStoryMultiCaptureModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStoryMultiCaptureModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <IGStoryMultiCaptureCaptureCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_triggerHapticKick;
- (void)_didLongPressCell:(id)arg1;
- (void)setSelectionIconVisible:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

