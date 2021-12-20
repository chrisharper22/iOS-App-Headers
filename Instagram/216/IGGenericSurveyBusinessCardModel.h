//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGenericSurveyModule-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGUser, NSArray, NSString;

@interface IGGenericSurveyBusinessCardModel : NSObject <IGListDiffable, IGGenericSurveyModule>
{
    NSString *_pk;
    IGUser *_user;
    NSArray *_imageURLs;
}

+ (id)newWithDictionary:(id)arg1 userStore:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (unsigned long long)moduleType;
- (_Bool)isTopLevelModule;
- (unsigned long long)hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPk:(id)arg1 user:(id)arg2 imageURLs:(id)arg3;

@end
