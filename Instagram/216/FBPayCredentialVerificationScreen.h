//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPayAuthenticationScreen-Protocol.h"

@class NSArray, NSAttributedString, NSString;

@interface FBPayCredentialVerificationScreen : NSObject <FBPayAuthenticationScreen>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_screenDescription;
    NSAttributedString *_terms;
    NSString *_editFieldTitle;
    NSString *_actionButtonText;
    NSArray *_errorMessages;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(readonly, copy, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(readonly, copy, nonatomic) NSString *editFieldTitle; // @synthesize editFieldTitle=_editFieldTitle;
@property(readonly, copy, nonatomic) NSAttributedString *terms; // @synthesize terms=_terms;
@property(readonly, copy, nonatomic) NSString *screenDescription; // @synthesize screenDescription=_screenDescription;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 screenDescription:(id)arg3 terms:(id)arg4 editFieldTitle:(id)arg5 actionButtonText:(id)arg6 errorMessage:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

