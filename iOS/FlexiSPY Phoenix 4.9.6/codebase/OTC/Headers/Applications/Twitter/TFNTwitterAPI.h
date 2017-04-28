/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "Twitter-Structs.h"
//#import <XXUnknownSuperclass.h> // Unknown library
//#import "TFNTwitterAuthenticatedAPIRequest.h"

@class NSString, TFNTwitterAccount, TFNTwitterAPICredentials;

@interface TFNTwitterAPI : NSObject { //XXUnknownSuperclass <TFNTwitterAuthenticatedAPIRequest> {
	NSString* _apiRoot;
	TFNTwitterAccount* _authenticateWithAccount;
	TFNTwitterAPICredentials* _authenticateWithCredentials;
	id _responseBlock;
	id _progressBlock;
	unsigned _backgroundTaskIdentifier;
@private
	BOOL _requireSystemAuth;
	BOOL _allowPartialAuth;
	BOOL _useInRequestOAuth;
	unsigned _authType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id progressBlock;
@property(copy, nonatomic) id responseBlock;
@property(assign, nonatomic) unsigned authType;
@property(assign, nonatomic) BOOL useInRequestOAuth;
@property(assign, nonatomic) BOOL allowPartialAuth;
@property(assign, nonatomic) BOOL requireSystemAuth;
+(id)authenticatedRequestWithAPIRoot:(id)apiroot account:(id)account credentials:(id)credentials responseBlock:(id)block;
+(id)authenticatedRequestWithAPIRoot:(id)apiroot account:(id)account responseBlock:(id)block;
+(id)requestWithAPIRoot:(id)apiroot responseBlock:(id)block;
+(id)defaultDmApiV11Root;
+(id)defaultUploadApiV11Root;
+(id)defaultApiRoot;
+(void)setUserAgentProvider:(id)provider;
+(id)userAgentProvider;
+(id)_permissionsFromJSONDictionary:(id)jsondictionary convertKeysToNumbers:(BOOL)numbers;
+(id)mentionsResponseParserQueue;
+(id)_cachedAdvertisingInformationIfAvailable;
+(id)_baseRequestWithPartialURL:(id)partialURL parameters:(id)parameters multiPartFormData:(id)data apiRoot:(id)root;
+(id)baseRequestWithPartialURL:(id)partialURL parameters:(id)parameters multiPartFormData:(id)data apiRoot:(id)root;
+(id)baseRequestWithPartialURL:(id)partialURL parameters:(id)parameters apiRoot:(id)root;
+(id)baseRequest;
+(id)scribeEndpointURL;
+(id)stringForTwitterSearchResultType:(unsigned)twitterSearchResultType;
+(id)typeaheadParameterForCacheUpdateDate:(id)cacheUpdateDate;
+(id)_typeaheadParameterForSourceType:(unsigned)sourceType;
+(id)typeaheadParameterForResultType:(int)resultType;
+(id)usersLookupParamDataWithEmails:(id)emails phones:(id)phones;
//-(void).cxx_destruct;
-(void)internal_DELETE:(id)aDelete parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)thirdPartyFilterStaging_POST:(id)post parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)thirdPartyFilter_POST:(id)post parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)internal_POST:(id)post headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)internal_POST:(id)post parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)internal_GET:(id)get parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)v1_1_DELETE:(id)aDelete parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)v1_1_GET:(id)get parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)v1_1_POST:(id)post headers:(id)headers multiPartFormData:(id)data retryPolicyProvider:(id)provider responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background6;
-(void)v1_1_POST:(id)post headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)v1_1_POST:(id)post parameters:(id)parameters headers:(id)headers timeout:(double)timeout retryPolicyProvider:(id)provider responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background7;
-(void)v1_1_POST:(id)post parameters:(id)parameters headers:(id)headers retryPolicyProvider:(id)provider responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background6;
-(void)v1_1_POST:(id)post parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)dealloc;
-(id)initWithAccount:(id)account credentials:(id)credentials apiRoot:(id)root responseBlock:(id)block;
-(id)initWithAccount:(id)account apiRoot:(id)root responseBlock:(id)block;
-(id)directMessageRequest:(id)request apiRoot:(id)root method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data start:(BOOL)start authType:(unsigned)type responseBlockInBackground:(id)background;
-(void)_processUserUpdatesResponse:(id)response;
-(void)_processUserInboxResponse:(id)response;
-(void)_processSendMessageResponse:(id)response isRetry:(BOOL)retry hasMedia:(BOOL)media;
-(void)_processDirectMessagePermissionsResponse:(id)response;
-(void)_processConversationEntriesResponse:(id)response;
-(void)_processConversationDeleteResponse:(id)response;
-(void)_processConversationRenameResponse:(id)response;
-(void)_processConversationAddParticipantsResponse:(id)response;
-(id)_parseUsersInResponseDictionary:(id)responseDictionary;
-(void)_parseResponse:(id)response block:(id)block;
-(id)_jsonDictionaryWithResponse:(id)response error:(id*)error;
-(id)_errorWithResponse:(id)response;
-(id)enableNotificationsForConversationID:(id)conversationID;
-(id)disableNotificationsForConversationID:(id)conversationID;
-(void)sendMessageToConversationID:(id)conversationID text:(id)text mediaID:(id)anId statusID:(id)anId4 requestID:(id)anId5 isRetry:(BOOL)retry;
-(void)createConversationWithParticipants:(id)participants text:(id)text mediaID:(id)anId statusID:(id)anId4 requestID:(id)anId5 isRetry:(BOOL)retry;
-(void)directMessageConversationEntries:(id)entries fromEntry:(id)entry toEntry:(id)entry3 limit:(id)limit;
-(void)directMessageUserInboxFromEntryID:(id)entryID toEntryID:(id)entryID2 limit:(id)limit;
-(void)directMessageUserUpdatesSinceEventID:(id)anId cursor:(id)cursor inboxMinID:(id)anId3 polling:(BOOL)polling limit:(id)limit;
-(void)directMessagePermissionsForUserIDs:(id)userIDs usernames:(id)usernames;
-(void)markMessageThreadWithConversationID:(id)conversationID readUpToEventID:(long long)eventID;
-(void)markAllConversationsReadUpToEventID:(long long)eventID;
-(void)deleteMessageThreadWithConversationID:(id)conversationID lastEventID:(long long)anId;
-(void)deleteMessageEntry:(id)entry;
-(void)renameGroupConversation:(id)conversation newName:(id)name;
-(void)addParticipants:(id)participants toConversationID:(id)conversationID;
-(id)_favoriteFollowResponseBlockWithScribeElement:(id)scribeElement;
-(void)emailUnfollowFavoriteUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)deviceUnfollowFavoriteUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)favoriteUnfollowUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)favoriteFollowWithRequest:(id)request;
-(void)favoriteFollowingForUserID:(id)userID cursor:(id)cursor count:(id)count;
-(void)favoriteFollowingForUserID:(id)userID cursor:(id)cursor;
-(void)favoriteFollowingIDsForUserID:(id)userID cursor:(id)cursor;
-(void)xAuthRequestAccessTokensWithLoginCode:(id)loginCode userID:(id)anId requestID:(id)anId3 type:(unsigned)type;
-(void)_xAuthRequestAccessTokensWithIdentifier:(id)identifier password:(id)password simCountryCode:(id)code;
-(void)xAuthRequestAccessTokensWithIdentifier:(id)identifier password:(id)password simCountryCode:(id)code;
-(void)xAuthRequestAccessTokens;
-(void)mobileSignUpUsername:(id)username password:(id)password fullName:(id)name email:(id)email captchaToken:(id)token captchaSolution:(id)solution discoverableByEmail:(BOOL)email7 discoverableByMobilePhone:(BOOL)phone retryPolicyProvider:(id)provider;
-(id)_resultFromCompletedRequest:(id)completedRequest urlEncodedResult:(BOOL)result error:(out id*)error;
-(void)removeSavedSearch:(id)search;
-(void)createSavedSearch:(id)search named:(id)named;
-(void)savedSearches;
-(void)updateProfileName:(id)name email:(id)email url:(id)url location:(id)location description:(id)description;
-(void)rateLimitStatus;
-(void)removeBannerImage;
-(void)updateBannerImage:(id)image size:(CGSize)size;
-(void)updateProfileImage:(id)image;
-(void)updateSettingsAllowAbuseFiltering:(BOOL)filtering;
-(void)updateSettingsAllowMediaTagging:(unsigned)tagging;
-(void)updateSettingsEmail:(id)email password:(id)password;
-(void)updateSettingsDiscoverableByPhone:(BOOL)phone;
-(void)updateSettingsDiscoverableByEmail:(BOOL)email;
-(void)updateSettings:(id)settings;
-(void)getSettings;
-(void)_settingsResponse:(id)response;
-(void)verifyCredentials;
-(void)setConnectReadPosition:(id)position;
-(void)fetchConnectReadPositionFromPolling:(BOOL)polling;
-(void)activitySummaryForStatusID:(id)statusID;
-(void)activityByFriendsSince:(id)since maxID:(id)anId count:(id)count;
-(void)activityAboutMeSince:(id)since maxID:(id)anId count:(id)count version:(id)version filters:(id)filters polling:(BOOL)polling;
-(void)mentionsActivityAboutMeSince:(id)since maxID:(id)anId count:(id)count filters:(id)filters;
-(void)_mentionsActivityResponse:(id)response;
-(void)_activityResponse:(id)response activityFilterBlock:(id)block;
-(void)_activityReponseForActivities:(id)activities activityFilterBlock:(id)block error:(id)error;
-(void)_blocksExistsResponse:(id)response;
-(void)unblockUsername:(id)username impressionID:(id)anId isEarned:(BOOL)earned;
-(void)unblockUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)blockUsername:(id)username impressionID:(id)anId isEarned:(BOOL)earned;
-(void)blockUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)blockingIDsWithCursor:(id)cursor;
-(void)blockingIDs;
-(void)refreshWorldCupConfiguration;
-(void)refreshSettings;
-(void)refreshGlobalConfiguration;
-(void)refreshMobileConfiguration;
-(void)reportSpamWithMessageID:(id)messageID conversationID:(id)anId spamType:(id)type blockUser:(BOOL)user;
-(void)destroyDirectMessage:(id)message;
-(void)send:(id)send isRetry:(BOOL)retry;
-(void)markMessagesAsReadUpToLastMessageID:(id)lastMessageID senderUserID:(id)anId;
-(void)sentDirectMessagesSinceID:(id)anId maxID:(id)anId2 count:(id)count polling:(BOOL)polling;
-(void)directMessagesSinceID:(id)anId maxID:(id)anId2 count:(id)count polling:(BOOL)polling;
-(void)_directMessageResponse:(id)response isSent:(BOOL)sent writeIntoDatabase:(BOOL)database;
-(void)_directMessagesResponse:(id)response isSent:(BOOL)sent;
-(void)universalDiscoveryWithCursor:(id)cursor isNext:(BOOL)next scrollDirection:(int)direction polling:(BOOL)polling;
-(id)_favoriteAttemptResponseBlock;
-(void)unfavoriteStatus:(id)status;
-(void)favoriteStatus:(id)status featureContext:(id)context;
-(void)favoritesForUsername:(id)username sinceID:(id)anId maxID:(id)anId3 count:(id)count;
-(void)favoritesForUserID:(id)userID sinceID:(id)anId maxID:(id)anId3 count:(id)count;
-(void)_relationshipShowResponse:(id)response;
-(void)_relationshipsResponse:(id)response users:(id)users;
-(void)_relationshipsResponse:(id)response;
-(void)declineFollowerRequestFromUserID:(id)userID;
-(void)acceptFollowerRequestFromUserID:(id)userID;
-(void)pendingFollowerRequests;
-(void)cancelPendingFollowRequestWithUserID:(id)userID impressionID:(id)anId isEarned:(BOOL)earned;
-(void)pendingFollowRequests;
-(void)friendshipForSourceUsername:(id)sourceUsername targetUsername:(id)username;
-(void)friendshipForSourceUserID:(id)sourceUserID targetUserID:(id)anId;
-(void)deviceUnfollowUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)cancelFollowRequestWithUserID:(id)userID impressionID:(id)anId isEarned:(BOOL)earned;
-(void)lifelineUnfollowUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)unfollowUserID:(id)anId impressionID:(id)anId2 isEarned:(BOOL)earned;
-(void)_lookupRelationshipsForUsersWithIDs:(id)ids usersWithUsernames:(id)usernames;
-(void)lookupRelationshipsForUsers:(id)users;
-(void)followUserIDs:(id)ids;
-(void)followUsernames:(id)usernames;
-(void)disableRetweetsFromUserID:(id)userID impressionID:(id)anId isEarned:(BOOL)earned;
-(void)enableRetweetsFromUserID:(id)userID impressionID:(id)anId isEarned:(BOOL)earned;
-(void)followWithRequest:(id)request;
-(void)checkSubscriptionForUserID:(id)userID forListID:(id)listID;
-(void)list:(id)list unfollowUsernames:(id)usernames;
-(void)list:(id)list unfollowUserID:(id)anId username:(id)username;
-(void)list:(id)list followUsernames:(id)usernames;
-(void)list:(id)list followUserID:(id)anId username:(id)username;
-(void)list:(id)list followsUserID:(id)anId username:(id)username;
-(void)unfollowList:(id)list;
-(void)followList:(id)list;
-(void)listWithUserID:(id)userID username:(id)username slug:(id)slug;
-(void)listWithListID:(id)listID;
-(void)listSubscribers:(id)subscribers userID:(id)anId username:(id)username cursor:(id)cursor;
-(void)listSubscribers:(id)subscribers cursor:(id)cursor;
-(void)listMembers:(id)members userID:(id)anId username:(id)username cursor:(id)cursor;
-(void)listMembers:(id)members cursor:(id)cursor;
-(void)listStatuses:(id)statuses userID:(id)anId username:(id)username sinceID:(id)anId4 maxID:(id)anId5 count:(id)count;
-(void)listStatuses:(id)statuses sinceID:(id)anId maxID:(id)anId3 count:(id)count;
-(void)deleteList:(id)list;
-(void)updateList:(id)list name:(id)name description:(id)description mode:(id)mode;
-(void)createList:(id)list description:(id)description mode:(id)mode;
-(void)listSubscriptionsAndOwnedForUserID:(id)userID username:(id)username ownedFirst:(BOOL)first;
-(void)listMembershipsForUserID:(id)userID username:(id)username cursor:(id)cursor filteredToOwner:(BOOL)owner;
-(void)listMembershipsForUserID:(id)userID username:(id)username cursor:(id)cursor;
-(void)listSuscriptionsForUserID:(id)userID username:(id)username cursor:(id)cursor;
-(void)listsOwnershipsForUserID:(id)userID username:(id)username cursor:(id)cursor;
-(void)_gotPlace:(id)place isFull:(BOOL)full;
-(void)_gotPlaces:(id)places;
-(void)findPlace:(id)place;
-(void)createPlace:(id)place;
-(void)similarPlaces:(id)places;
-(void)reverseGeocode:(id)geocode;
-(void)geoSearch:(id)search;
//-(void)reverseGeocodeCoordinate:(XXStruct_zYrK5D)coordinate;
//-(void)placeSearch:(id)search coordinate:(XXStruct_zYrK5D)coordinate;
//-(void)createPlace:(id)place coordinate:(XXStruct_zYrK5D)coordinate address:(id)address category:(id)category username:(id)username;
-(id)_truncateOAuthToken:(id)token;
-(id)derivedInfoJSONResponseBlock;
-(id)verifyCredentialsJSONResponseBlock;
-(id)followingIDsJSONResponseBlock;
-(id)customTimelineGenericResponseBlock;
-(id)customTimelineJSONResponseBlock;
-(id)customTimelinesPaginatedJSONResponseBlock;
-(id)customTimelinesJSONResponseBlock;
-(id)customTimelineStatusesResponseBlock;
-(id)mutingUserIDsPaginatedResultsJSONResponseBlock;
-(id)mutingGenericResponseBlock;
-(id)listGenericResponseBlock;
-(id)listJSONResponseBlock;
-(id)listsPaginatedJSONResponseBlock;
-(id)listsJSONResponseBlock;
-(id)friendshipsOutgoingJSONResponseBlock;
-(id)friendshipsIncomingJSONResponseBlock;
-(id)userJSONResponseBlock;
-(id)usersJSONResponseBlock;
-(id)usersPaginatedResultsJSONResponseBlock;
-(id)richTimelineStatusesResponseBlockIgnoringUsers:(BOOL)users;
-(id)statusResponseBlockWithWriteIntoDatabase:(BOOL)writeIntoDatabase;
-(id)statusesResponseBlock;
-(id)statusesResponseBlockIgnoringUsers:(BOOL)users;
-(id)headOnlyResponseBlock;
-(void)statusRequest:(id)request sinceID:(id)anId maxID:(id)anId3 count:(id)count promoted:(BOOL)promoted fromLocation:(id)location polling:(BOOL)polling;
-(void)invokeProgressBlockWithProgress:(double)progress;
-(void)invokeResponseBlock:(id)block preprocessBlock:(id)block2;
-(void)invokeResponseBlock:(id)block;
-(void)requestResponse:(id)response responseBlockInBackground:(id)background;
-(void)attemptResponse:(id)response;
-(BOOL)_handleRequestNotSignedError:(int)error;
-(void)_postErrorNotificationLater:(id)later forURL:(id)url account:(id)account forceReauth:(BOOL)reauth;
-(void)_clearPendingErrorNotificationsForURL:(id)url account:(id)account;
-(BOOL)_isInterestingURLForErrorNotifications:(id)errorNotifications;
-(void)_initializePendingErrorNotificationDictionary;
-(double)_clockDelta:(id)delta;
-(void)_attachCredentials:(id)credentials authType:(unsigned)type;
-(void)v1_1_request:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data timeout:(double)timeout retryPolicyProvider:(id)provider responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background9;
-(void)v1_1_request:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data retryPolicyProvider:(id)provider responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background8;
-(void)v1_1_request:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)thirdPartyFilterStagingRequest:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)thirdPartyFilterRequest:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)internal_request:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)oauth_POST:(id)post parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)oauth_request:(id)request method:(int)method parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)v1_1_guestRequest:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)guestRequest:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)v1_1_appRequest:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)appRequest:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)v1_DELETE:(id)aDelete parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)v1_GET:(id)get parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)v1_POST:(id)post headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(void)v1_POST:(id)post parameters:(id)parameters headers:(id)headers responseBlockInBackground:(id)background;
-(void)v1_request:(id)request method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data responseBlockInBackground:(id)background;
-(id)request:(id)request apiRoot:(id)root method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data start:(BOOL)start authType:(unsigned)type timeout:(double)timeout retryPolicyProvider:(id)provider responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background12;
-(id)request:(id)request apiRoot:(id)root method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data start:(BOOL)start authType:(unsigned)type retryPolicyProvider:(id)provider responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background11;
-(id)request:(id)request apiRoot:(id)root method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data start:(BOOL)start authType:(unsigned)type responseBlockInBackground:(id)background;
-(id)requestWithPartialURL:(id)partialURL apiRoot:(id)root method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data authType:(unsigned)type responseBlockInBackground:(id)background attemptResponseBlockInBackground:(id)background9;
-(id)requestWithPartialURL:(id)partialURL apiRoot:(id)root method:(int)method parameters:(id)parameters headers:(id)headers multiPartFormData:(id)data authType:(unsigned)type responseBlockInBackground:(id)background;
-(id)userIDNumber;
-(id)username;
-(id)paymentApiRoot;
-(BOOL)useCommerceStubs;
-(id)commerceApiRoot;
-(id)cardsApiRoot;
-(id)dmApi_v1_1_Root;
-(id)uploadApi_v1_1_Root;
-(id)thirdPartyFilterStagingApiRoot;
-(id)thirdPartyFilterApiRoot;
-(id)mobileApiRoot;
-(id)userStreamApiRoot;
-(id)oauthApiRoot;
-(id)internalApiRoot;
-(id)apiRoot_v1_1;
-(id)apiRoot_v1;
-(id)apiRoot;
-(void)_logPromotedImpression:(id)impression event:(int)event logType:(int)type isEarned:(BOOL)earned extraParameters:(id)parameters;
-(void)_logPromotedImpression:(id)impression event:(int)event logType:(int)type isEarned:(BOOL)earned;
-(void)logPromotionItem:(id)item;
-(void)logPromotedTrend:(id)trend event:(int)event;
-(void)logPromotedTweet:(id)tweet event:(int)event;
-(void)logPromotedUser:(id)user event:(int)event;
-(void)_didUnregisterForPush:(id)push;
-(void)unregisterForPush;
-(void)unregisterForPushUnauthenticatedWithUsername:(id)username clientApplicationID:(id)anId;
-(void)_queryServerPushDestinationsWithToken:(id)token;
-(void)loadPushSettings;
-(void)registerForPushWithDeviceToken:(id)deviceToken enabledFor:(int)aFor appVersion:(int)version;
-(void)retweetResponse:(id)response info:(id)info;
-(void)retweet:(id)retweet featureContext:(id)context;
-(void)scribeEvents:(id)events withURL:(id)url;
-(id)_scribeJSONResponseBlock;
-(id)_requestParametersForSearch:(id)search count:(id)count prevCursor:(id)cursor nextCursor:(id)cursor4;
-(id)requestDescriptionForSearch:(id)search;
-(void)search:(id)search count:(id)count prevCursor:(id)cursor nextCursor:(id)cursor4 polling:(BOOL)polling;
-(id)defaultModules;
-(void)reportSpamUsername:(id)username impressionID:(id)anId shouldBlockUser:(BOOL)user isEarned:(BOOL)earned;
-(void)reportSpamUserID:(id)anId impressionID:(id)anId2 shouldBlockUser:(BOOL)user isEarned:(BOOL)earned;
-(id)_tweetAttemptResponseBlock:(id)block;
-(id)_statusSendResponseBlock:(id)block;
-(void)conversationsTimelineSinceID:(id)anId maxID:(id)anId2 count:(id)count polling:(BOOL)polling filter:(id)filter showPromoted:(BOOL)promoted;
-(void)conversationsTimelineSinceID:(id)anId maxID:(id)anId2 count:(id)count polling:(BOOL)polling;
-(void)favoritePeopleTimelineSinceID:(id)anId maxID:(id)anId2 count:(id)count polling:(BOOL)polling;
-(void)reportStatusAsSpam:(id)spam spamType:(id)type blockUser:(BOOL)user;
-(void)mediaTimelineWithUserID:(id)userID username:(id)username count:(id)count sinceID:(id)anId maxID:(id)anId5;
-(void)destroyStatus:(id)status;
-(void)updateWithComposition:(id)composition;
-(id)_tweetRetryPolicyProvider;
-(void)conversationForStatusWithID:(id)anId since:(id)since max:(id)max count:(id)count;
-(void)statusWithID:(id)anId;
-(void)userTimelineForUsername:(id)username sinceID:(id)anId maxID:(id)anId3 count:(id)count polling:(BOOL)polling;
-(void)userTimelineForUsername:(id)username sinceID:(id)anId maxID:(id)anId3 count:(id)count;
-(void)userTimelineForUserID:(id)userID sinceID:(id)anId maxID:(id)anId3 count:(id)count;
-(void)repliesSinceID:(id)anId maxID:(id)anId2 count:(id)count polling:(BOOL)polling;
-(void)friendsTimelineSinceID:(id)anId maxID:(id)anId2 count:(id)count fromLocation:(id)location polling:(BOOL)polling;
-(void)trendsAtLocationWithID:(id)anId options:(unsigned)options excludePromotedContent:(BOOL)content;
-(void)trendLocationsAt:(id)at;
-(id)_trendTypesForModuleOptions:(unsigned)moduleOptions;
-(void)typeaheadSuggestionsForQuery:(id)query resultType:(int)type forSource:(unsigned)source maxResults:(id)results;
-(void)typeaheadPrefetchedOneClicks;
-(void)typeaheadPrefetchedUsersWithMaxResults:(unsigned)maxResults lastCacheUpdate:(id)update;
-(void)typeaheadPrefetchedTopicsWithMaxResults:(unsigned)maxResults lastCacheUpdate:(id)update;
-(void)derivedInfo;
-(void)lookupUsersWithUsernames:(id)usernames;
-(void)lookupUsersWithIDs:(id)ids;
-(void)_bulkLookupUsersByParameter:(id)parameter withValues:(id)values;
-(void)signUpSMSHashGeneration;
-(void)emailAvailability:(id)availability;
-(void)usernameAvailability:(id)availability fullName:(id)name email:(id)email;
-(void)screenNameSuggestionWithFullName:(id)fullName email:(id)email username:(id)username;
-(void)reverseAddressBookLookup;
-(void)uploadContacts:(id)contacts;
-(void)contactsLookupWithBatchSize:(id)batchSize lookupType:(id)type pagedToken:(id)token;
-(void)usersWithEmails:(id)emails phones:(id)phones;
-(void)inviteUsersWithEmailsAndNamesInDictionary:(id)dictionary;
-(void)suggestedUsersForTopicSlug:(id)topicSlug cursor:(id)cursor;
-(void)suggestedTopics;
-(void)suggestedUsersForCategory:(id)category language:(id)language country:(id)country;
-(void)suggestedUsersForCategory:(id)category;
-(void)suggestionCategoriesForLanguage:(id)language country:(id)country;
-(void)recommendationsForUsersSimilarToUserID:(id)userID orUsername:(id)username limit:(id)limit excluded:(id)excluded displayLocation:(id)location;
-(void)_userRecommendationsResponse:(id)response;
-(void)searchUsers:(id)users count:(id)count;
-(void)userWithUsername:(id)username;
-(void)userWithID:(id)anId;
-(void)suggestedDeviceFollowForUserID:(id)userID;
-(void)deviceFollowingIDsForUserID:(id)userID cursor:(id)cursor;
-(void)deviceFollowingForUserID:(id)userID cursor:(id)cursor;
-(void)verifiedFollowersForUserID:(id)userID cursor:(id)cursor;
-(void)followersForUsername:(id)username cursor:(id)cursor;
-(void)followersForUserID:(id)userID cursor:(id)cursor;
-(void)friendsForUsername:(id)username cursor:(id)cursor;
-(void)friendsForUserID:(id)userID cursor:(id)cursor count:(id)count;
-(void)friendsForUserID:(id)userID cursor:(id)cursor;
-(void)friendsForUserID:(id)userID cursor:(id)cursor count:(id)count type:(id)type;
-(void)handleUserStreamEvent:(id)event handlerBlock:(id)block;
-(id)openUserStreamWithTrack:(id)track handlerBlock:(id)block;
-(void)translationForStatusID:(id)statusID language:(id)language;
-(void)listMutedUsersWithCursor:(id)cursor includeStatuses:(BOOL)statuses includeExpiry:(BOOL)expiry polling:(BOOL)polling;
-(void)listMutedUserIDsWithCursor:(id)cursor includeExpiry:(BOOL)expiry polling:(BOOL)polling;
-(void)deleteUserMuteForUserID:(id)userID username:(id)username;
-(void)createUserMuteForUserID:(id)userID username:(id)username expiry:(id)expiry;
-(id)_errorForMediaUploadRequestFailure:(id)mediaUploadRequestFailure errorCode:(int)code uploadInfo:(id)info;
-(void)deleteMediaTagsFromStatus:(id)status mediaIDs:(id)ids userIDs:(id)ids3;
-(id)mediaUploadWithPath:(id)path type:(int)type size:(unsigned long long)size;
-(id)mediaUploadFinalizeSessionWithMediaID:(id)mediaID size:(unsigned)size;
-(id)mediaUploadAppendSessionWithMediaID:(id)mediaID segmentData:(id)data segmentIndex:(int)index segmentSize:(unsigned)size totalSize:(unsigned)size5 start:(unsigned)start end:(unsigned)end retryPolicyProvider:(id)provider;
-(id)mediaUploadInitSessionWithSize:(unsigned long long)size mimeType:(id)type;
-(id)_appEventTrackingResponseBlock;
-(id)appTrackingDictionary:(id)dictionary;
-(void)appEventTrackingWithParameters:(id)parameters;
-(void)customTimelineStatuses:(id)statuses minPosition:(id)position maxPosition:(id)position3 count:(id)count;
-(void)customTimeline:(id)timeline removeStatus:(id)status;
-(void)customTimeline:(id)timeline addStatus:(id)status;
-(void)updateCustomTimeline:(id)timeline withName:(id)name description:(id)description associatedURL:(id)url;
-(void)deleteCustomTimeline:(id)timeline;
-(void)createCustomTimelineWithName:(id)name visibility:(id)visibility description:(id)description associatedURL:(id)url;
-(void)createCustomTimelineWithName:(id)name description:(id)description associatedURL:(id)url;
-(void)unfollowCustomTimeline:(id)timeline;
-(void)followCustomTimeline:(id)timeline;
-(void)customTimelinesFollowedByUserID:(id)anId cursor:(id)cursor;
-(void)customTimelinesContainingStatusID:(id)anId;
-(void)customTimelinesOwnedByUserID:(id)anId cursor:(id)cursor;
-(void)customTimelineWithID:(id)anId;
-(void)fetchInstallReferral;
-(void)completeSMSUnlockAccountWithPhoneNumber:(id)phoneNumber pin:(id)pin;
-(void)startSMSUnlockAccountWithPhoneNumber:(id)phoneNumber;
-(void)completeVerificationWithPhoneNumber:(id)phoneNumber token:(id)token tokenType:(unsigned)type enableNotifications:(BOOL)notifications;
-(void)registerPhoneNumber:(id)number withTextMessage:(id)textMessage sendNumericPin:(BOOL)pin enableNotifications:(BOOL)notifications;
-(void)_fetchCurrentDeviceOperatorAvailability;
-(void)fetchCurrentDeviceOperatorAvailability;
-(void)_persistDataAndInvokeResponseBlock:(id)block;
//-(void)nearbyContentWithMapRect:(XXStruct_Yvvv9D)mapRect userId:(id)anId;
-(id)_suggestsResponseBlock;
-(void)dismissSuggestsItem:(id)item;
-(void)getSuggestsTimelineSinceMinCursor:(id)cursor maxCursor:(id)cursor2 count:(id)count polling:(BOOL)polling;
-(void)getSuggestsTimelineSinceMinCursor:(id)cursor maxCursor:(id)cursor2 polling:(BOOL)polling;
-(void)deletePaymentProfiles;
-(void)authorizePurchaseOfProduct:(id)product withCreditCard:(id)creditCard;
-(void)getProductInfo:(id)info forShippingAddress:(id)shippingAddress;
-(void)addCreditCard:(id)card signature:(id)signature timestamp:(id)timestamp;
-(void)getSignatureForCreditCard:(id)creditCard andAddPostalAddress:(id)address;
-(void)getCreditCardSignature:(id)signature;
-(void)getPaymentProfiles;
-(void)addPostalAddress:(id)address;
-(void)reverseAuthAccessTokenWithReverseAuthParameters:(id)reverseAuthParameters;
-(void)reverseAuthRequestToken;
-(void)guestActivate;
-(void)deleteChallengeResponse:(id)response;
-(void)postChallengeResponseForRequestWithID:(id)anId withChallengeResponse:(id)challengeResponse;
-(void)getActiveLoginChallenge;
-(void)unregisterForLoginVerification:(BOOL)loginVerification publicKey:(id)key;
-(void)canRegisterForLoginVerification:(id)loginVerification;
-(void)registerForLoginVerification:(id)loginVerification keyHash:(id)hash count:(id)count;
-(void)appTokenExchange;
@end
