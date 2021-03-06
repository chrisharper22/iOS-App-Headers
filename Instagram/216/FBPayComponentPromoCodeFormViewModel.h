//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayFormViewModel.h>

#import "FBPayFormInlineCellViewModelDelegate-Protocol.h"

@class FBPayComponentDataFetchingResponse, FBPayFormButtonCellViewModel, FBPayFormGenericCellViewModel, FBPayFormHeaderConfiguration, NSArray, NSString;
@protocol FBPayComponentPromoCodeFormViewModelDelegate, FBPayUPLLoggingAPI;

@interface FBPayComponentPromoCodeFormViewModel : FBPayFormViewModel <FBPayFormInlineCellViewModelDelegate>
{
    NSArray *_appliedPromoCodes;
    FBPayFormGenericCellViewModel *_promoCodeInputCell;
    FBPayFormButtonCellViewModel *_applyButton;
    FBPayComponentDataFetchingResponse *_componentInfo;
    FBPayFormHeaderConfiguration *_headerConfiguration;
    id <FBPayUPLLoggingAPI> _logger;
    id <FBPayComponentPromoCodeFormViewModelDelegate> _promoCodeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayComponentPromoCodeFormViewModelDelegate> promoCodeDelegate; // @synthesize promoCodeDelegate=_promoCodeDelegate;
- (void)accessoryViewWasTapped:(id)arg1;
- (id)_promoCodeViewModels;
- (id)_formConfiguration;
- (id)_applyButton;
- (id)_promoCodeFormCellViewModel;
- (void)updateComponentConfig:(id)arg1;
- (void)updatePromoCodes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPromoCodes:(id)arg1 componentInfo:(id)arg2 headerConfiguration:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

