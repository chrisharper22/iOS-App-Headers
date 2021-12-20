//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGFundraiserDonationDonatedStateModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    _Bool _hasViewerDonated;
    NSString *_youDonatedMessage;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *youDonatedMessage; // @synthesize youDonatedMessage=_youDonatedMessage;
@property(readonly, nonatomic) _Bool hasViewerDonated; // @synthesize hasViewerDonated=_hasViewerDonated;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithHasViewerDonated:(_Bool)arg1 youDonatedMessage:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
