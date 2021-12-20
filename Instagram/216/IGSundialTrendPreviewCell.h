//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFeedPreviewableCell-Protocol.h"

@class IGImageView, NSNumber, NSString;

@interface IGSundialTrendPreviewCell : UICollectionViewCell <IGFeedPreviewableCell>
{
    IGImageView *_previewImageView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(readonly, nonatomic) NSNumber *currentPlaybackTime;
- (_Bool)shouldAllowPreviewForLocation:(struct CGPoint)arg1;
- (id)image;
- (id)sessionId;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

