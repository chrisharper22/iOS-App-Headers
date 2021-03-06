//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAutocompleteControllerDelegate-Protocol.h"
#import "IGBrandedContentPartnersViewControllerDelegate-Protocol.h"
#import "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#import "IGShoppingProductTaggingFlowPresenterDelegate-Protocol.h"
#import "IGShoppingTaggingPermissionsHelperDelegate-Protocol.h"
#import "IGTVMetadataDescriptionInputHandlerDelegate-Protocol.h"
#import "IGTVMetadataEditorAdvancedSettingsViewControllerDelegate-Protocol.h"
#import "IGTVMetadataTitleInputHandlerDelegate-Protocol.h"
#import "IGTVPostUploadCreationCapabilitiesServiceDelegate-Protocol.h"
#import "IGTVPostUploadMetadataEditorViewDelegate-Protocol.h"
#import "IGTVPostUploadMetadataHandlerDelegate-Protocol.h"
#import "IGTVSeriesListViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGAutocompleteController, IGKeyboardObserver, IGMedia, IGShoppingProductTaggingFeedPinProductConfiguration, IGShoppingTaggingPermissionsHelper, IGTVCreationEditAnalyticsSessionLogger, IGTVMetadataDescriptionInputHandler, IGTVMetadataTitleInputHandler, IGTVPostUploadCreationCapabilitiesService, IGTVPostUploadMetadataEditorView, IGTVPostUploadMetadataHandler, IGTVProductTaggingPinProductCTAConfiguration, IGTVShoppingUploadMetadata, IGUserSession, IGVideoSeriesDataModel, NSArray, NSString, UIBarButtonItem, UITapGestureRecognizer;
@protocol IGAlertHUDHandling;

@interface IGTVPostUploadMetadataEditorViewController : IGViewController <IGAutocompleteControllerDelegate, IGKeyboardObserverFrameChangeDelegate, IGTVMetadataDescriptionInputHandlerDelegate, IGTVMetadataEditorAdvancedSettingsViewControllerDelegate, IGTVPostUploadMetadataHandlerDelegate, IGTVMetadataTitleInputHandlerDelegate, IGTVSeriesListViewControllerDelegate, UIGestureRecognizerDelegate, IGTVPostUploadMetadataEditorViewDelegate, IGShoppingTaggingPermissionsHelperDelegate, IGShoppingProductTaggingFlowPresenterDelegate, IGTVPostUploadCreationCapabilitiesServiceDelegate, IGBrandedContentPartnersViewControllerDelegate>
{
    IGMedia *_media;
    IGUserSession *_userSession;
    IGTVCreationEditAnalyticsSessionLogger *_creationEditAnalytics;
    IGTVMetadataTitleInputHandler *_titleInputHandler;
    IGTVMetadataDescriptionInputHandler *_descriptionInputHandler;
    IGTVPostUploadMetadataEditorView *_metadataEditorView;
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_loadingBarButtonItem;
    IGKeyboardObserver *_keyboardObserver;
    UITapGestureRecognizer *_keyboardDismissTap;
    IGTVPostUploadMetadataHandler *_metadataHandler;
    IGAutocompleteController *_autocompleteController;
    IGVideoSeriesDataModel *_selectedSeriesDataModel;
    _Bool _isFundedContent;
    _Bool _isPaidPartnership;
    IGTVShoppingUploadMetadata *_shoppingMetadata;
    IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
    IGTVProductTaggingPinProductCTAConfiguration *_pinProductCtaConfig;
    IGShoppingProductTaggingFeedPinProductConfiguration *_pinProductConfig;
    NSArray *_brandedContentTags;
    id <IGAlertHUDHandling> _loadingHUD;
    IGTVPostUploadCreationCapabilitiesService *_capabilitiesService;
    _Bool _loading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void)tvPostUploadMetadataHandlerDidFail:(id)arg1;
- (void)tvPostUploadMetadataHandler:(id)arg1 isLoading:(_Bool)arg2;
- (void)tvPostUploadMetadataHandlerDidComplete:(id)arg1;
- (id)windowToPresentAlert;
- (void)postUploadMetadataEditorView:(id)arg1 didTapSubtitleLink:(id)arg2;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectProductCollection:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5;
- (void)productTaggingFlowPresenter:(id)arg1 didSelectTaggedProductItems:(id)arg2 merchantID:(id)arg3 productMerchantIDs:(id)arg4 sessionID:(id)arg5 pinnedProducts:(id)arg6 productSelectionBehavior:(id)arg7;
- (void)productTaggingFlowPresenterDidCancel:(id)arg1 sessionID:(id)arg2;
- (void)advancedSettingsViewController:(id)arg1 didUpdateDataModel:(id)arg2;
- (void)seriesListViewController:(id)arg1 didSelectSeriesDataModel:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateResponse:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateTaggingPermissionsStatus:(long long)arg2;
- (_Bool)_requestProductTaggingPermissionsIfNecessary;
- (void)_handleRemoveCaptions;
- (void)_configurePaidPartnershipRowAccessoryText;
- (void)_configureProductTaggingRowAccessoryText;
- (void)_updateViews;
- (void)_titleInputChanged;
- (void)_removeCaptionsRowTapped;
- (void)_tagProductRowButtonTapped;
- (void)_editPaidPartnershipRowButtonTapped;
- (void)_advSettingsButtonTapped;
- (void)_addToSeriesRowButtonTapped;
- (void)_handleTapGesture:(id)arg1;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (void)igtvPostUploadCreationCapabilitiesService:(id)arg1 didUpdateCreationCapabilities:(id)arg2;
- (void)partnersViewControllerDidTapDoneButton;
- (void)partnersViewController:(id)arg1 didUpdateAgeGatingInfo:(id)arg2 geoGatingCountries:(id)arg3;
- (void)partnersViewController:(id)arg1 didUpdatePartners:(id)arg2 isPaidPartnership:(_Bool)arg3 isBCAdsPermissionOn:(_Bool)arg4;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)titleTextFieldDidBeginEditing:(id)arg1;
- (void)titleTextFieldDidTypeReturn:(id)arg1;
- (void)titleTextFieldDidChange:(id)arg1;
- (void)descriptionTextViewDidBeginEditing:(id)arg1;
- (void)descriptionTextViewDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)autocompleteControllerDidReload:(id)arg1;
- (void)autocompleteController:(id)arg1 atIndex:(long long)arg2 isUserSearch:(_Bool)arg3 allResults:(id)arg4 indexInNullState:(unsigned long long)arg5;
- (void)autocompleteController:(id)arg1 willHideContainerView:(id)arg2;
- (void)autocompleteController:(id)arg1 willShowContainerView:(id)arg2 type:(long long)arg3;
- (void)autocompleteControllerDidAutocomplete:(id)arg1 autocompleteText:(id)arg2 resultUser:(id)arg3;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMedia:(id)arg1 userSession:(id)arg2 creationEditAnalytics:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

