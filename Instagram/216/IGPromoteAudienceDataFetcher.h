//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGPromoteAudienceDataFetcher : NSObject
{
}

+ (void)postUpdateAutoAudienceGeoLocationWithAdAccountId:(id)arg1 cityKeys:(id)arg2 countries:(id)arg3 regionKeys:(id)arg4 zipKeys:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 radius:(id)arg8 address:(id)arg9 userSession:(id)arg10 successBlock:(CDUnknownBlockType)arg11 failureBlock:(CDUnknownBlockType)arg12;
+ (void)postCreateAudienceWithAdAccountId:(id)arg1 AudienceName:(id)arg2 genders:(id)arg3 minAge:(id)arg4 maxAge:(id)arg5 hashtagIds:(id)arg6 interestIds:(id)arg7 cityKeys:(id)arg8 countries:(id)arg9 regionKeys:(id)arg10 zipKeys:(id)arg11 latitude:(id)arg12 longitude:(id)arg13 radius:(id)arg14 address:(id)arg15 userSession:(id)arg16 successBlock:(CDUnknownBlockType)arg17 failureBlock:(CDUnknownBlockType)arg18;
+ (void)postEditAudienceWithAudienceId:(id)arg1 audienceName:(id)arg2 genders:(id)arg3 minAge:(id)arg4 maxAge:(id)arg5 hashtagIds:(id)arg6 interestIds:(id)arg7 cityKeys:(id)arg8 countries:(id)arg9 regionKeys:(id)arg10 zipKeys:(id)arg11 latitude:(id)arg12 longitude:(id)arg13 radius:(id)arg14 address:(id)arg15 userSession:(id)arg16 successBlock:(CDUnknownBlockType)arg17 failureBlock:(CDUnknownBlockType)arg18;
+ (void)fetchEditAudienceScreenWithAudienceId:(id)arg1 audienceType:(id)arg2 destinationType:(long long)arg3 userSession:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)fetchCreateAudienceScreenWithMediaId:(id)arg1 regulatedCategories:(id)arg2 destinationType:(long long)arg3 userSession:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)fetchAudienceDataWithMediaId:(id)arg1 adAccountId:(id)arg2 regulatedCategories:(id)arg3 userSession:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end

