//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGSMBDiscountErrorDataModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_internalError;
    NSString *_errorMessage;
    long long _errorIdentifier;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long errorIdentifier; // @synthesize errorIdentifier=_errorIdentifier;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, copy, nonatomic) NSString *internalError; // @synthesize internalError=_internalError;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithInternalError:(id)arg1 errorMessage:(id)arg2 errorIdentifier:(long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

