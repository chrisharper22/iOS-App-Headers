//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray;

@interface IGNftAssetsList : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_nftAssets;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *nftAssets; // @synthesize nftAssets=_nftAssets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithNftAssets:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

