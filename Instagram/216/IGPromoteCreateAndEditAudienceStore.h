//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPromoteAudienceDefaultLocationDataModel, NSArray, NSSet, NSString;

@interface IGPromoteCreateAndEditAudienceStore : NSObject
{
    NSString *_adAccountId;
    NSString *_mediaId;
    NSString *_pageId;
    NSString *_audienceName;
    NSString *_audienceId;
    long long _minAge;
    long long _maxAge;
    NSString *_supportsLocalTargetingString;
    long long _selectedMinAge;
    long long _selectedMaxAge;
    long long _gender;
    long long _selectedLocationType;
    long long _selectedRegulatedCategory;
    NSSet *_selectedRegulatedCategories;
    long long _selectedDestinationType;
    NSArray *_hashtags;
    NSArray *_interests;
    NSArray *_locations;
    IGPromoteAudienceDefaultLocationDataModel *_defaultLocation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGPromoteAudienceDefaultLocationDataModel *defaultLocation; // @synthesize defaultLocation=_defaultLocation;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(copy, nonatomic) NSArray *interests; // @synthesize interests=_interests;
@property(copy, nonatomic) NSArray *hashtags; // @synthesize hashtags=_hashtags;
@property(nonatomic) long long selectedDestinationType; // @synthesize selectedDestinationType=_selectedDestinationType;
@property(retain, nonatomic) NSSet *selectedRegulatedCategories; // @synthesize selectedRegulatedCategories=_selectedRegulatedCategories;
@property(nonatomic) long long selectedRegulatedCategory; // @synthesize selectedRegulatedCategory=_selectedRegulatedCategory;
@property(nonatomic) long long selectedLocationType; // @synthesize selectedLocationType=_selectedLocationType;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long selectedMaxAge; // @synthesize selectedMaxAge=_selectedMaxAge;
@property(nonatomic) long long selectedMinAge; // @synthesize selectedMinAge=_selectedMinAge;
@property(copy, nonatomic) NSString *supportsLocalTargetingString; // @synthesize supportsLocalTargetingString=_supportsLocalTargetingString;
@property(nonatomic) long long maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) long long minAge; // @synthesize minAge=_minAge;
@property(copy, nonatomic) NSString *audienceId; // @synthesize audienceId=_audienceId;
@property(copy, nonatomic) NSString *audienceName; // @synthesize audienceName=_audienceName;
@property(readonly, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) NSString *adAccountId; // @synthesize adAccountId=_adAccountId;
- (id)initWithAdAccountId:(id)arg1 mediaId:(id)arg2 pageId:(id)arg3;

@end

