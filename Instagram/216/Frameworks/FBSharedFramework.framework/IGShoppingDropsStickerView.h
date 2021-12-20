//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGSaveStatusListener-Protocol.h>
#import <FBSharedFramework/IGShoppingDropsCollectionReminderListener-Protocol.h>
#import <FBSharedFramework/IGShoppingDropsTimerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryProductStickerProtocol-Protocol.h>

@class IGImageView, IGProductStickerModel, IGShoppingDropsLaunchDateFormatter, IGShoppingDropsStickerButtonView, IGShoppingDropsTimer, IGStoryStickerExportModel, NSDate, NSString, UIColor, UILabel;
@protocol IGDropsProductStickerViewConsumptionDelegate, IGProductSaveStatusStoreProviding><IGProductDrawingEnterStatusStoreProviding><IGShoppingDropsCollectionReminderControllerProviding;

@interface IGShoppingDropsStickerView : UIView <IGSaveStatusListener, IGShoppingDropsTimerDelegate, IGShoppingDropsCollectionReminderListener, IGStoryProductStickerProtocol>
{
    IGProductStickerModel *_stickerModel;
    NSDate *_referenceDate;
    UILabel *_launchDateLabel;
    IGImageView *_productPictureImageView;
    UIView *_productPictureBorderView;
    UILabel *_subtitleLabel;
    UIView *_backgroundView;
    IGShoppingDropsStickerButtonView *_primaryCTA;
    _Bool _showMerchantName;
    UIColor *_primaryColor;
    IGShoppingDropsLaunchDateFormatter *_formatter;
    IGShoppingDropsTimer *_launchTimer;
    NSString *_reminderNotSetText;
    id <IGProductSaveStatusStoreProviding><IGProductDrawingEnterStatusStoreProviding><IGShoppingDropsCollectionReminderControllerProviding> _userScopedObjects;
    NSString *_productName;
    id <IGDropsProductStickerViewConsumptionDelegate> _consumptionDelegate;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDropsProductStickerViewConsumptionDelegate> consumptionDelegate; // @synthesize consumptionDelegate=_consumptionDelegate;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)_addLaunchFadeAnimationsForFadeInTime:(double)arg1 fadeOutTime:(double)arg2;
- (void)_updateCTA;
- (void)_updateSubtitleLabel;
- (void)shoppingDropsTimerDidFire:(id)arg1;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)footerLabel;
- (void)productStickerDidAppear;
- (_Bool)handleTapActionAtPointInWindowCoordinates:(struct CGPoint)arg1;
- (void)setPrimaryColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_getLaunchDate:(id)arg1;
- (void)displayLaunchDate;
- (_Bool)isPointOnReminderButton:(struct CGPoint)arg1;
- (void)animateProductLaunchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dropsCollectionReminderStatusDidChange:(id)arg1 reminderStatus:(_Bool)arg2 actionType:(long long)arg3;
- (void)dealloc;
- (id)initWithStickerModel:(id)arg1 referenceDate:(id)arg2 showMerchantName:(_Bool)arg3 userScopedObjects:(id)arg4 reminderNotSetText:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
