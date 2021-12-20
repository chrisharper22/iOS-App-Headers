//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingProductTaggingFlowPresenterDelegate-Protocol.h"
#import "IGShoppingTaggingPermissionsHelperDelegate-Protocol.h"

@class IGNavigationController, IGShoppingTaggingPermissionsHelper, IGSundialShoppingCapabilities, IGSundialShoppingMetadata, IGUser, IGUserSession, NSString;
@protocol IGSundialShoppingTagProductManagerDelegate;

@interface IGSundialShoppingTagProductManager : NSObject <IGShoppingProductTaggingFlowPresenterDelegate, IGShoppingTaggingPermissionsHelperDelegate>
{
    IGUserSession *_userSession;
    IGNavigationController *_navigationController;
    IGSundialShoppingCapabilities *_sundialShoppingCapabilities;
    IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
    NSString *_shoppingTaggingSessionId;
    NSString *_analyticsModule;
    id <IGSundialShoppingTagProductManagerDelegate> _delegate;
    IGUser *_sponsorPartner;
    IGSundialShoppingMetadata *_shoppingMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSundialShoppingMetadata *shoppingMetadata; // @synthesize shoppingMetadata=_shoppingMetadata;
@property(retain, nonatomic) IGUser *sponsorPartner; // @synthesize sponsorPartner=_sponsorPartner;
@property(nonatomic) __weak IGNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <IGSundialShoppingTagProductManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_maybeRequestProductTaggingPermissionsForSponsorPartner:(id)arg1;
- (void)handleTagProductRowButtonTapped;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateResponse:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateTaggingPermissionsStatus:(long long)arg2;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectProductCollection:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectTaggedProductItems:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5 pinnedProducts:(id)arg6 productSelectionBehavior:(id)arg7;
- (void)productTaggingFlowPresenterDidCancel:(id)arg1 sessionID:(id)arg2;
- (id)descriptionText;
- (id)initWithUserSession:(id)arg1 navigationController:(id)arg2 sundialShoppingCapabilities:(id)arg3 taggingSessionId:(id)arg4 shoppingMetadata:(id)arg5 sponsorPartner:(id)arg6 analyticsModule:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

