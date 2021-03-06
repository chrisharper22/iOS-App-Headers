//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface IGGuideStickerModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_pk;
    NSDictionary *_unparsedGuideSummary;
    NSString *_tapStateId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *tapStateId; // @synthesize tapStateId=_tapStateId;
@property(readonly, copy, nonatomic) NSDictionary *unparsedGuideSummary; // @synthesize unparsedGuideSummary=_unparsedGuideSummary;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1 unparsedGuideSummary:(id)arg2 tapStateId:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

