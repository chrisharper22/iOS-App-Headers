//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTwoFactorStatusInfo, NSString;

@interface IGTwoFactorSetupFlowContext : NSObject
{
    _Bool _isAuthAppSetUpManually;
    NSString *_confirmingPhoneNumber;
    NSString *_confirmingEmail;
    NSString *_entryPoint;
    IGTwoFactorStatusInfo *_statusInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthAppSetUpManually; // @synthesize isAuthAppSetUpManually=_isAuthAppSetUpManually;
@property(readonly, nonatomic) IGTwoFactorStatusInfo *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) NSString *confirmingEmail; // @synthesize confirmingEmail=_confirmingEmail;
@property(retain, nonatomic) NSString *confirmingPhoneNumber; // @synthesize confirmingPhoneNumber=_confirmingPhoneNumber;
- (_Bool)isPhoneNumberEntryPoint;
- (id)initWithStatusInfo:(id)arg1 entryPoint:(id)arg2;

@end

