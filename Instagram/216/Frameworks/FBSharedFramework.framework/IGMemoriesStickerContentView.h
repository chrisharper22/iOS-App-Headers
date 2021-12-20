//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStickerViewType-Protocol.h>

@class IGStaticStickerPaddedLabel, IGStoryStickerExportModel, NSDate, NSString;

@interface IGMemoriesStickerContentView : UIView <IGStickerViewType>
{
    IGStaticStickerPaddedLabel *_secondaryLabel;
    IGStaticStickerPaddedLabel *_primaryLabel;
    long long _stickerType;
    double _textPadding;
    NSDate *_date;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)outlinePath;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)_loggingId;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDate:(id)arg1 stickerType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
