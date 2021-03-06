//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShareListManager, IGTableLayoutSpec, IGUserSession, NSString;

@interface IGShareSocialShareManager : NSObject
{
    long long _surface;
    _Bool _hasFBSwitcherBeenInitialized;
    NSString *_facebookShareDisclaimerText;
    long long _shareType;
    IGShareListManager *_shareListManager;
    IGUserSession *_userSession;
    IGTableLayoutSpec *_tableInterface;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
@property(readonly, nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *facebookShareDisclaimerText; // @synthesize facebookShareDisclaimerText=_facebookShareDisclaimerText;
- (long long)_indexForFacebookDisclaimer;
- (long long)_shareServiceOffsetForIndex:(long long)arg1;
- (id)_accountNameForPersonal;
- (id)_accountNameForBusiness;
- (void)setIsCrossSharing:(_Bool)arg1;
- (void)setIsBrandedContent:(_Bool)arg1;
- (struct CGSize)sizeForCellWithContentWidth:(double)arg1 atIndex:(long long)arg2;
- (long long)cellTypeAtIndex:(long long)arg1;
- (unsigned long long)numberOfShareServices;
- (void)configureTextDisclosureCell:(id)arg1;
- (void)configureShareServiceCell:(id)arg1 atIndexPath:(id)arg2 shareLocation:(id)arg3 shareLoggerExtra:(id)arg4 switchBlock:(CDUnknownBlockType)arg5 module:(id)arg6;
- (void)_fetchAdditionalShareInfoIfNecessaryForService:(id)arg1 cell:(id)arg2;
- (id)initWithShareType:(long long)arg1 shareListManager:(id)arg2 surface:(long long)arg3 userSession:(id)arg4;

@end

