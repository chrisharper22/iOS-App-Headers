//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGPoliticalAdsDataSourceDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class IGFeedItemTracker, IGIOSLink, IGMedia, IGPoliticalAdsDataSource, IGPoliticalAdsFEVView, IGSponsoredSupportConfiguration, IGUserSession, NSString;

@interface IGPoliticalAdsViewController : IGViewController <IGPoliticalAdsDataSourceDelegate, IGCoreTextLinkHandler, MFMailComposeViewControllerDelegate>
{
    IGPoliticalAdsDataSource *_dataSource;
    IGPoliticalAdsFEVView *_fevView;
    IGUserSession *_userSession;
    IGMedia *_media;
    IGIOSLink *_aboutElectoralAdsUrl;
    IGIOSLink *_aboutPoliticalAdsUrl;
    IGIOSLink *_visitPoliticalArchiveUrl;
    NSString *_fevTaxId;
    NSString *_fevPhoneNumber;
    NSString *_fevEmail;
    NSString *_fevWebsite;
    IGFeedItemTracker *_feedItemTracker;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    _Bool _isAdsPreferencePoliticalSheet;
}

- (void).cxx_destruct;
- (_Bool)_handleWebViewForLink:(id)arg1 media:(id)arg2 userSession:(id)arg3 urlSource:(unsigned long long)arg4 viewController:(id)arg5;
- (_Bool)_handleDeepLink:(id)arg1;
- (void)_handleLinksForMedia:(id)arg1 links:(id)arg2 urlSource:(unsigned long long)arg3;
- (void)_didTapArchiveView;
- (void)_didTapWebsiteView:(id)arg1;
- (void)_didTapTaxIdView:(id)arg1;
- (void)_didTapPhoneView:(id)arg1;
- (void)_didTapEmailView:(id)arg1;
- (void)_copyTextToClipboard:(id)arg1;
- (void)_openSCMELearnMoreURL;
- (void)_openHelpCenterURL;
- (void)_logInfoSheetWebClickActionWithDestination:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didFailWithError:(id)arg1;
- (void)didFetchResponse:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 sponsoredSupportConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

