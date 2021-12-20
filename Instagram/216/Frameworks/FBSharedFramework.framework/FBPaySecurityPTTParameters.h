//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface FBPaySecurityPTTParameters : NSObject
{
    unsigned int _otcType;
    NSString *_operation;
    NSString *_targetAccountID;
    NSString *_otcSessionID;
    NSDictionary *_pttData;
    NSSet *_sensitiveKeys;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *sensitiveKeys; // @synthesize sensitiveKeys=_sensitiveKeys;
@property(readonly, copy, nonatomic) NSDictionary *pttData; // @synthesize pttData=_pttData;
@property(readonly, nonatomic) unsigned int otcType; // @synthesize otcType=_otcType;
@property(readonly, copy, nonatomic) NSString *otcSessionID; // @synthesize otcSessionID=_otcSessionID;
@property(readonly, copy, nonatomic) NSString *targetAccountID; // @synthesize targetAccountID=_targetAccountID;
@property(readonly, copy, nonatomic) NSString *operation; // @synthesize operation=_operation;
- (id)initWithOperation:(id)arg1 targetAccountID:(id)arg2 otcSessionID:(id)arg3 otcType:(unsigned int)arg4 pttData:(id)arg5 sensitiveKeys:(id)arg6;
- (id)initWithOperation:(id)arg1 targetAccountID:(id)arg2 pttData:(id)arg3 sensitiveKeys:(id)arg4;
- (id)initWithOperation:(id)arg1 targetAccountID:(id)arg2 pttData:(id)arg3;

@end

