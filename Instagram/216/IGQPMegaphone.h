//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGenericMegaphone.h>

#import "IGQPTemplateModelProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGQPMegaphone : IGGenericMegaphone <NSCopying, IGQPTemplateModelProtocol>
{
    NSString *_surfaceID;
    NSString *_promotionID;
    NSString *_socialContextText;
    NSArray *_socialContextImages;
    NSString *_inlinePrefillText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *inlinePrefillText; // @synthesize inlinePrefillText=_inlinePrefillText;
@property(readonly, copy, nonatomic) NSArray *socialContextImages; // @synthesize socialContextImages=_socialContextImages;
@property(readonly, copy, nonatomic) NSString *socialContextText; // @synthesize socialContextText=_socialContextText;
@property(readonly, copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(readonly, copy, nonatomic) NSString *surfaceID; // @synthesize surfaceID=_surfaceID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 dismissible:(_Bool)arg3 type:(id)arg4 iconURL:(id)arg5 bottomIconURL:(id)arg6 backgroundColor:(id)arg7 dismissButtonColor:(id)arg8 titleColor:(id)arg9 messageColor:(id)arg10 buttonOne:(id)arg11 buttonTwo:(id)arg12 buttonThree:(id)arg13 uuid:(id)arg14 bottomMessage:(id)arg15 actionInfo:(id)arg16 megaphoneType:(long long)arg17 buttonLayout:(long long)arg18 promotionID:(id)arg19 surfaceID:(id)arg20 iconHeight:(id)arg21 iconWidth:(id)arg22 socialContextText:(id)arg23 socialContextImages:(id)arg24 inlinePrefillText:(id)arg25;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

