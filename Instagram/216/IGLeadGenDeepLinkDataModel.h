//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class IGLeadGenDataModel, IGLeadGenPageDataModel, NSArray, NSString;

@interface IGLeadGenDeepLinkDataModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _hasSharedInfo;
    IGLeadGenDataModel *_leadGenData;
    NSString *_defaultSentText;
    NSString *_defaultUnsubscribeDescription;
    NSString *_errorMessageBrief;
    NSString *_errorMessageDetail;
    NSString *_followUpActionURLString;
    NSString *_followUpActionText;
    NSArray *_errorCodes;
    NSString *_dataPolicySettingDescription;
    NSString *_dataPolicyUrl;
    NSString *_privacySettingDescription;
    NSString *_secureSharingText;
    NSString *_primaryButtonText;
    IGLeadGenPageDataModel *_page;
    NSString *_sendDescription;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasSharedInfo; // @synthesize hasSharedInfo=_hasSharedInfo;
@property(readonly, copy, nonatomic) NSString *sendDescription; // @synthesize sendDescription=_sendDescription;
@property(readonly, copy, nonatomic) IGLeadGenPageDataModel *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *primaryButtonText; // @synthesize primaryButtonText=_primaryButtonText;
@property(readonly, copy, nonatomic) NSString *secureSharingText; // @synthesize secureSharingText=_secureSharingText;
@property(readonly, copy, nonatomic) NSString *privacySettingDescription; // @synthesize privacySettingDescription=_privacySettingDescription;
@property(readonly, copy, nonatomic) NSString *dataPolicyUrl; // @synthesize dataPolicyUrl=_dataPolicyUrl;
@property(readonly, copy, nonatomic) NSString *dataPolicySettingDescription; // @synthesize dataPolicySettingDescription=_dataPolicySettingDescription;
@property(readonly, copy, nonatomic) NSArray *errorCodes; // @synthesize errorCodes=_errorCodes;
@property(readonly, copy, nonatomic) NSString *followUpActionText; // @synthesize followUpActionText=_followUpActionText;
@property(readonly, copy, nonatomic) NSString *followUpActionURLString; // @synthesize followUpActionURLString=_followUpActionURLString;
@property(readonly, copy, nonatomic) NSString *errorMessageDetail; // @synthesize errorMessageDetail=_errorMessageDetail;
@property(readonly, copy, nonatomic) NSString *errorMessageBrief; // @synthesize errorMessageBrief=_errorMessageBrief;
@property(readonly, copy, nonatomic) NSString *defaultUnsubscribeDescription; // @synthesize defaultUnsubscribeDescription=_defaultUnsubscribeDescription;
@property(readonly, copy, nonatomic) NSString *defaultSentText; // @synthesize defaultSentText=_defaultSentText;
@property(readonly, copy, nonatomic) IGLeadGenDataModel *leadGenData; // @synthesize leadGenData=_leadGenData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLeadGenData:(id)arg1 defaultSentText:(id)arg2 defaultUnsubscribeDescription:(id)arg3 errorMessageBrief:(id)arg4 errorMessageDetail:(id)arg5 followUpActionURLString:(id)arg6 followUpActionText:(id)arg7 errorCodes:(id)arg8 dataPolicySettingDescription:(id)arg9 dataPolicyUrl:(id)arg10 privacySettingDescription:(id)arg11 secureSharingText:(id)arg12 primaryButtonText:(id)arg13 page:(id)arg14 sendDescription:(id)arg15 hasSharedInfo:(_Bool)arg16;
- (id)initWithCoder:(id)arg1;

@end
