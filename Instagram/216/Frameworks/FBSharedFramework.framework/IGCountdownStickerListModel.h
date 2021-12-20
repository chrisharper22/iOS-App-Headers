//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IGCountdownStickerListModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _moreAvailable;
    _Bool _showSeeAll;
    NSArray *_countdownModels;
    NSString *_maxID;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showSeeAll; // @synthesize showSeeAll=_showSeeAll;
@property(readonly, nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(readonly, copy, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(readonly, copy, nonatomic) NSArray *countdownModels; // @synthesize countdownModels=_countdownModels;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCountdownModels:(id)arg1 maxID:(id)arg2 moreAvailable:(_Bool)arg3 showSeeAll:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end

