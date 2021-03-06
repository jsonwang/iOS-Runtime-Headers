/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAGraphServiceWorker : PHAWorker <PHALibraryChangeResponder, PLPhotoAnalysisGraphServiceProtocol> {
    NSObject<OS_dispatch_queue> * _backgroundTaskQueue;
    NSProgress * _currentGraphRebuildProgress;
    unsigned int  _flags;
    PGManager * _graphManager;
    NSObject<OS_os_transaction> * _graphWorkerWarmedUpTransaction;
    unsigned int  _inq_state;
    PGManager * _lastGraphManager;
    NSDate * _lastLibraryChangeGraphUpdateJobCompletionDate;
    NSDate * _lastTodayWidgetMemoryCreationDate;
    PHACoalescer * _libraryChangeForegroundUpdateCoalescer;
    NSMutableDictionary * _pendingGraphReadyCallbacks;
    PHALibraryChangeBuffer * _pendingLibraryChanges;
    int  _pendingRequestReferenceCount;
    NSHashTable * _pendingRequestReferences;
    PHAPredicateValidator * _relatedRequestPredicateValidator;
    BOOL  _serviceEnabled;
    NSDictionary * _snapshotFilenameLookup;
}

@property (retain) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (retain) NSProgress *currentGraphRebuildProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int flags;
@property (retain) PGManager *graphManager;
@property (retain) NSObject<OS_os_transaction> *graphWorkerWarmedUpTransaction;
@property (readonly) unsigned int hash;
@property PGManager *lastGraphManager;
@property (retain) NSDate *lastLibraryChangeGraphUpdateJobCompletionDate;
@property (retain) PHACoalescer *libraryChangeForegroundUpdateCoalescer;
@property (retain) NSMutableDictionary *pendingGraphReadyCallbacks;
@property (retain) PHALibraryChangeBuffer *pendingLibraryChanges;
@property int pendingRequestReferenceCount;
@property (retain) NSHashTable *pendingRequestReferences;
@property (retain) PHAPredicateValidator *relatedRequestPredicateValidator;
@property unsigned int state;
@property (readonly) Class superclass;

+ (int)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)arg1;
+ (void)initialize;
+ (id)stringFromGraphServiceState:(unsigned int)arg1;
+ (BOOL)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+ (short)workerType;

- (void).cxx_destruct;
- (id)_PHMemoryCategoryValueToDataAggregationKeyLookup;
- (id)_assetCollectionForLocalIdentifier:(id)arg1;
- (id)_collectionListForLocalIdentifier:(id)arg1;
- (id)_dataAggregationKeyForCategory:(int)arg1 subCategory:(int)arg2 lookupTable:(id)arg3;
- (id)_diagnosticsLogsRootFolderPath;
- (id)_featureVectorInfoWithMemory:(id)arg1;
- (id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned int)arg2;
- (id)_infoForMomentsBackingMemory:(id)arg1;
- (BOOL)_isLibraryBeingSynchronized;
- (void)_logAggregatedStatistics:(id)arg1;
- (int)_phCategoryWithPGCategory:(unsigned int)arg1;
- (int)_phSubcategoryWithPGSubcategory:(int)arg1;
- (int)_phTitleCategoryForPGTitleCategory:(int)arg1;
- (BOOL)_shouldAggregateDataForReporting:(unsigned int)arg1;
- (int)_titleTupleFormatForPhotoAnalysisTitleFormat:(int)arg1;
- (BOOL)allowCooldownForWorkerChange:(id)arg1;
- (id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2;
- (id)backgroundMemoryGenerationJobWithScenario:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)backgroundTaskQueue;
- (void)callAndClearPendingReadyCallbacksWithResult:(BOOL)arg1 error:(id)arg2;
- (BOOL)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
- (BOOL)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
- (void)computeDiffWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)cooldown;
- (id)currentGraphRebuildProgress;
- (id)currentlyUnavailableError;
- (void)didCompleteRebuildOrDiffSuccessfully;
- (BOOL)didExceedtimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2;
- (void)didFinishLastPendingRequest;
- (id)diffComputationJobWithScenario:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchOptionsWithCurrentPhotoLibraryFromFetchOptions:(id)arg1;
- (unsigned int)flags;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)graphManager;
- (id)graphRebuildJobWithScenario:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)graphUpdateDetailsForLibraryChangeSnapshot:(id)arg1;
- (id)graphWorkerWarmedUpTransaction;
- (BOOL)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned int)arg1;
- (BOOL)hasAdditionalJobForDiffComputationInScenario:(unsigned int)arg1;
- (BOOL)hasAdditionalJobForGraphRebuildInScenario:(unsigned int)arg1;
- (BOOL)hasAdditionalJobForPendingLibraryChangesInScenario:(unsigned int)arg1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned int)arg1;
- (id)informationDictionaryForAsset:(id)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (BOOL)isEnabled;
- (BOOL)isQuiescent;
- (id)lastGraphManager;
- (id)lastLibraryChangeGraphUpdateJobCompletionDate;
- (id)libraryChangeForegroundUpdateCoalescer;
- (id)libraryChangeGraphUpdateJobForPendingChangesWithScenario:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)libraryChangeListener:(id)arg1 gotRawChange:(id)arg2;
- (id)libraryTemporarilyUnavailableError;
- (void)markAssetsInChangeDetails:(id)arg1 withState:(int)arg2;
- (void)markLastBackgroundGraphRebuildJobDate;
- (id)memoryDebugInformationWithMoments:(id)arg1 precision:(unsigned int)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned int)arg1;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)pendingGraphReadyCallbacks;
- (id)pendingLibraryChanges;
- (int)pendingRequestReferenceCount;
- (void)pendingRequestReferenceDidDeallocateForAddress:(void*)arg1;
- (id)pendingRequestReferenceForLabel:(id)arg1;
- (id)pendingRequestReferences;
- (void)performGraphUpdates:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)rebuildGraphWithContext:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)rebuildGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (id)relatedRequestPredicateValidator;
- (void)requestAllSocialGroupsForFaceCollectionIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetCollectionsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToFaceCollectionIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned int)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned int)arg2 precision:(unsigned int)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestCurationDebugInformationForAsset:(id)arg1 precision:(unsigned int)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestGraphServiceStatisticWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned int)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestRelatedDebugInformationBetweenMomentForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestRelatedMomentsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSnapshotServiceForCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned int)arg3 relatedType:(unsigned int)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSocialGroupsForFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSortedArrayOfFaceCollectionIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(int)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(int)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(int)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)setBackgroundTaskQueue:(id)arg1;
- (void)setCurrentGraphRebuildProgress:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setGraphWorkerWarmedUpTransaction:(id)arg1;
- (void)setLastGraphManager:(id)arg1;
- (void)setLastLibraryChangeGraphUpdateJobCompletionDate:(id)arg1;
- (void)setLibraryChangeForegroundUpdateCoalescer:(id)arg1;
- (void)setPendingGraphReadyCallbacks:(id)arg1;
- (void)setPendingLibraryChanges:(id)arg1;
- (void)setPendingRequestReferenceCount:(int)arg1;
- (void)setPendingRequestReferences:(id)arg1;
- (void)setRelatedRequestPredicateValidator:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setupGraphManager;
- (void)setupLibraryChangeListener;
- (void)setupPredicateValidator;
- (BOOL)shouldAllowBackgroundActivityWithDescription:(id)arg1;
- (BOOL)shouldCooldownForConstraintChange:(id)arg1;
- (BOOL)shouldUnloadGraphOnCooldown;
- (BOOL)shouldWarmupForConstraintChange:(id)arg1;
- (void)shutdown;
- (void)shutdownAndWaitForGraphManager;
- (BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)startProcessingGraphUpdateJob:(id)arg1;
- (void)startup;
- (unsigned int)state;
- (id)statusAsDictionary;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (int)unavailableErrorCodeForCurrentState;
- (void)warmup;
- (BOOL)warmupBasedOnConstraintChanges;
- (BOOL)workerJobCausesCooldown:(id)arg1;

@end
